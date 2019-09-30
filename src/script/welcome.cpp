#include <gazebo/gazebo.hh>

namespace gazebo
{
  class welcomePlugin : public WorldPlugin
  {
    public: welcomePlugin() : WorldPlugin()
            {
              printf("Welcome to Tanmay's world!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(welcomePlugin)
}
