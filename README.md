Part One: Performance of std::vector vs. Vector2Ptr
I implemented a Shape class that allocates significant memory. I conducted an experiment comparing 
the performance of standard std::vector and a custom vector class Vector2Ptr, which uses double pointers for object storage.
The operations involved inserting and removing Shape objects, and the time taken for each operation was recorded.

The results demonstrated that Vector2Ptr performed significantly faster than the standard std::vector, 
likely due to its more efficient memory handling and access patterns.
(image url: https://github.com/ghazaltj/Ghazal_Tajgar_Cpp_Project/blob/master/Screenshot%202024-08-19%20112442.png) 

Part Two: Device Class
In this part, I introduced a Device class that can contain simple shapes or other sub-devices.
The class includes methods to calculate physical properties like mass, volume, and surface area, allowing 
for complex hierarchical structures that represent various physical systems.
The Device class showcases object composition and polymorphism, demonstrating how larger systems can be modeled by combining simpler components.
