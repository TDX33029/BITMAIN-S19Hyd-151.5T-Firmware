// FUN_0003a9e0 @ 0003a9e0  size=716  callers=13
// program: bmminer


void FUN_0003a9e0(undefined4 param_1,int param_2)

{
  char acStack_808 [2052];
  
  switch(param_1) {
  case 0:
    snprintf((char *)&DAT_00507438,0x40,"J%d:1",param_2);
    break;
  case 1:
    snprintf((char *)&DAT_00507438,0x40,"J%d:2",param_2);
    break;
  case 2:
    snprintf((char *)&DAT_00507438,0x40,"J%d:8",param_2);
    break;
  case 3:
    snprintf((char *)&DAT_00507438,0x40,"J%d:4",param_2);
    break;
  case 4:
    snprintf((char *)&DAT_00507438,0x40,"J%d:5",param_2);
    break;
  case 5:
    DAT_00507438 = &DAT_00313a52;
    break;
  case 6:
    DAT_00507438 = &DAT_00323a52;
    break;
  case 7:
    snprintf((char *)&DAT_00507438,0x40,"T:%d",param_2);
    break;
  case 8:
    DAT_00507438 = &DAT_00313a50;
    break;
  case 9:
    DAT_00507438 = &DAT_00323a50;
    break;
  case 10:
    DAT_00507438 = &DAT_00313a46;
    break;
  case 0xb:
    snprintf((char *)&DAT_00507438,0x40,"J%d:6",param_2);
    break;
  case 0xc:
    DAT_00507438 = &DAT_00313a56;
    break;
  case 0xd:
    DAT_00507438 = &DAT_00313a4d;
    break;
  case 0xe:
    DAT_00507438 = &DAT_00313a4e;
    break;
  case 0xf:
    DAT_00507438 = &DAT_00343a50;
    break;
  default:
    DAT_00507438 = (undefined *)0x6e6b6e75;
    DAT_0050743c._0_1_ = 'o';
    DAT_0050743c._1_1_ = 'w';
    DAT_0050743c._2_1_ = 'n';
    DAT_0050743c._3_1_ = '\0';
    break;
  case 0x11:
    DAT_00507438 = &DAT_00333a52;
    break;
  case 0x12:
    DAT_00507438 = &DAT_00313a43;
    break;
  case 0x13:
    DAT_00507438 = &DAT_00323a4e;
    break;
  case 0x14:
    DAT_00507438 = &DAT_00303a53;
    break;
  case 0x15:
    DAT_00507438 = &DAT_00333a4e;
    break;
  case 0x16:
    DAT_00507438 = &DAT_00353a50;
  }
  FUN_0003b874(1);
  if (3 < DAT_00087bbc) {
    snprintf(acStack_808,0x800,"Sweep error string = %s.\n",(char *)&DAT_00507438);
    FUN_00032218(3,acStack_808,0);
  }
  return;
}

