// FUN_00d4474c @ 00d4474c size=132 calls_out=1 calls_in=0
// strings: 

void FUN_00d4474c(int *param_1)

{
  code *pcStack_60;
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
  
  puStack_30 = (undefined1 *)&pcStack_60;
  pcStack_60 = FUN_00356de8;
  uStack_5c = 9;
  if (*param_1 != 2) {
    piStack_28 = &iStack_58;
    iStack_58 = *param_1;
    iStack_54 = param_1[1];
    iStack_50 = param_1[2];
    iStack_4c = param_1[3];
    iStack_48 = param_1[4];
    iStack_44 = param_1[5];
    iStack_40 = param_1[6];
    iStack_3c = param_1[7];
    iStack_38 = param_1[8];
    puStack_24 = &LAB_00f9c598;
    puStack_2c = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005767ed,&puStack_30,&DAT_01880884);
  }
  return;
}

