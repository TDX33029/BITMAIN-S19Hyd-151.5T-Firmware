// FUN_00784964 @ 00784964 size=144 calls_out=1 calls_in=1
// strings: hashrate_ths

void FUN_00784964(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcStack_60;
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
  pcStack_60 = "hashrate_ths";
  uStack_5c = 0xc;
  if (*param_2 == 1) {
    piStack_28 = &iStack_58;
    iStack_58 = param_2[1];
    iStack_54 = param_2[2];
    iStack_50 = param_2[3];
    iStack_4c = param_2[4];
    iStack_48 = param_2[5];
    iStack_44 = param_2[6];
    iStack_40 = param_2[7];
    iStack_3c = param_2[8];
    iStack_38 = param_2[9];
    puStack_24 = &LAB_00f9c598;
    puStack_2c = &DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005767ed,&puStack_30,&DAT_01880884);
  }
  uVar2 = *(undefined8 *)(param_2 + 4);
  iVar1 = param_2[3];
  *param_1 = param_2[2];
  param_1[1] = iVar1;
  *(undefined8 *)(param_1 + 2) = uVar2;
  return;
}

