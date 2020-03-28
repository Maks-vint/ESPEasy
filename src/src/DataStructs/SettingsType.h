#ifndef DATASTRUCTS_SETTINGSTYPE_H
#define DATASTRUCTS_SETTINGSTYPE_H

#include "../../ESPEasy_common.h"


class SettingsType {
public:

  enum Enum {
    BasicSettings_Type = 0,
    TaskSettings_Type,
    CustomTaskSettings_Type,
    ControllerSettings_Type,
    CustomControllerSettings_Type,
    NotificationSettings_Type,

    SettingsType_MAX
  };

  static String getSettingsTypeString(Enum settingsType);
  static bool   getSettingsParameters(Enum settingsType,
                                      int  index,
                                      int& offset,
                                      int& max_size);
  static bool getSettingsParameters(Enum settingsType,
                                    int  index,
                                    int& max_index,
                                    int& offset,
                                    int& max_size,
                                    int& struct_size);

  static int          getMaxFilePos(Enum settingsType);
  static int          getFileSize(Enum settingsType);

  static unsigned int getSVGcolor(Enum settingsType);

  static String getSettingsFileName(Enum settingsType);
};


#endif // DATASTRUCTS_SETTINGSTYPE_H
