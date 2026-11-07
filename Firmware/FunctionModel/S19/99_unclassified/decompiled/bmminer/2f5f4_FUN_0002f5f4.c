// FUN_0002f5f4 @ 0002f5f4  size=404  callers=1
// program: bmminer


void FUN_0002f5f4(int param_1,undefined4 param_2)

{
  int local_80c;
  char local_808 [2048];
  
  local_80c = param_1;
  FUN_00042fa0(&DAT_00087628,"Options for both config file and command line");
  FUN_00042fa0(&DAT_00087ad0,"Options for command line only");
  FUN_00043074(&local_80c,param_2,&DAT_0002bcac);
  if (local_80c != 1) {
    builtin_strncpy(local_808,"Unexpected extra commandline arguments",0x27);
    FUN_00032218(3,local_808,1);
  }
  FUN_0002ce20();
  if (DAT_0008a1f8 != 0) {
    FUN_0002e050();
  }
  if (DAT_0008a1f0 != (char *)0x0) {
    DAT_0048c9dc = 1;
    strcpy(&DAT_0048ca04,DAT_0008a1f0);
    if (DAT_0008a1f4 == (char *)0x0) {
      DAT_0048c9e4 = 0x2b61;
      DAT_0048c9e6 = 0;
    }
    else {
      strcpy((char *)&DAT_0048c9e4,DAT_0008a1f4);
    }
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(local_808,0x800,"Log file path: %s Open flag: %s",&DAT_0048ca04,(char *)&DAT_0048c9e4
              );
      FUN_00032218(3,local_808,0);
    }
  }
  return;
}

