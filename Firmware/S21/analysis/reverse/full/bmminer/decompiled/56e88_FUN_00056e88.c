// FUN_00056e88 @ 00056e88  size=852  callers=19
// program: bmminer


void FUN_00056e88(undefined4 param_1,int param_2)

{
  char acStack_2008 [8196];
  
  switch(param_1) {
  case 0:
    snprintf((char *)&DAT_00944b30,0x40,"J%d:1",param_2);
    break;
  case 1:
    snprintf((char *)&DAT_00944b30,0x40,"J%d:2",param_2);
    break;
  case 2:
    snprintf((char *)&DAT_00944b30,0x40,"J%d:8",param_2);
    break;
  case 3:
    snprintf((char *)&DAT_00944b30,0x40,"J%d:4",param_2);
    break;
  case 4:
    snprintf((char *)&DAT_00944b30,0x40,"J%d:5",param_2);
    break;
  case 5:
    DAT_00944b30 = &DAT_00313a52;
    break;
  case 6:
    DAT_00944b30 = &DAT_00323a52;
    break;
  case 7:
    snprintf((char *)&DAT_00944b30,0x40,"T:%d",param_2);
    break;
  case 8:
    DAT_00944b30 = &DAT_00313a50;
    break;
  case 9:
    DAT_00944b30 = &DAT_00323a50;
    break;
  case 10:
    DAT_00944b30 = &DAT_00313a46;
    break;
  case 0xb:
    snprintf((char *)&DAT_00944b30,0x40,"J%d:6",param_2);
    break;
  case 0xc:
    DAT_00944b30 = &DAT_00313a56;
    break;
  case 0xd:
    DAT_00944b30 = &DAT_00313a4d;
    break;
  case 0xe:
    DAT_00944b30 = &DAT_00313a4e;
    break;
  case 0xf:
    DAT_00944b30 = &DAT_00343a50;
    break;
  default:
    DAT_00944b30 = (undefined *)0x6e6b6e75;
    DAT_00944b34._0_1_ = 'o';
    DAT_00944b34._1_1_ = 'w';
    DAT_00944b34._2_1_ = 'n';
    DAT_00944b34._3_1_ = '\0';
    break;
  case 0x11:
    DAT_00944b30 = &DAT_00333a52;
    break;
  case 0x12:
    DAT_00944b30 = &DAT_00313a43;
    break;
  case 0x13:
    DAT_00944b30 = &DAT_00323a4e;
    break;
  case 0x14:
    DAT_00944b30 = &DAT_00303a53;
    break;
  case 0x15:
    DAT_00944b30 = &DAT_00333a4e;
    break;
  case 0x16:
    DAT_00944b30 = &DAT_00353a50;
    break;
  case 0x17:
    snprintf((char *)&DAT_00944b30,0x40,"L%d:1",param_2);
    break;
  case 0x18:
    snprintf((char *)&DAT_00944b30,0x40,"L%d:2",param_2);
    break;
  case 0x19:
    DAT_00944b30 = &DAT_00323a56;
    break;
  case 0x1a:
    DAT_00944b30 = &DAT_00353a4e;
    break;
  case 0x1b:
    DAT_00944b30 = &DAT_00333a56;
  }
  FUN_00057d3c(1);
  if (3 < DAT_000be63c) {
    snprintf(acStack_2008,0x2000,"Sweep error string = %s.\n",(char *)&DAT_00944b30);
    FUN_0004948c(3,acStack_2008,0);
  }
  return;
}

