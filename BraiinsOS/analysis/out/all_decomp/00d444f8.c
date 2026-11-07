// FUN_00d444f8 @ 00d444f8 size=124 calls_out=1 calls_in=0
// strings: 

int FUN_00d444f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 *puStack_30;
  undefined4 *puStack_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  
  puStack_30 = (undefined1 *)&local_60;
  if (*param_4 != 2) {
    piStack_28 = &iStack_58;
    iStack_58 = *param_4;
    iStack_54 = param_4[1];
    iStack_50 = param_4[2];
    iStack_4c = param_4[3];
    iStack_48 = param_4[4];
    iStack_44 = param_4[5];
    iStack_40 = param_4[6];
    iStack_3c = param_4[7];
    iStack_38 = param_4[8];
    puStack_24 = &LAB_00f9c598;
    puStack_2c = &DAT_0157d360;
    local_60 = param_2;
    uStack_5c = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(param_1,&DAT_005767ed,&puStack_30,&DAT_01880884);
  }
  return param_4[1];
}

