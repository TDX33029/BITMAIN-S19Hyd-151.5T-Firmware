// FUN_0119ec84 @ 0119ec84 size=228 calls_out=4 calls_in=1
// strings: additionalProperties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0119ec84(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_011e4414(&local_58,param_3,param_2);
  if (local_58 == 0) {
    *param_1 = 0;
    param_1[1] = local_54;
    return;
  }
  uVar2 = FUN_0123ab30(*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                       "additionalProperties",0x14);
  piVar1 = (int *)thunk_FUN_016d4a50(0x38);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x38);
  }
  *piVar1 = local_58;
  piVar1[1] = local_54;
  piVar1[2] = local_50;
  piVar1[3] = iStack_4c;
  piVar1[4] = iStack_48;
  piVar1[5] = iStack_44;
  piVar1[6] = iStack_40;
  piVar1[7] = local_3c;
  piVar1[8] = iStack_38;
  piVar1[9] = iStack_34;
  piVar1[10] = iStack_30;
  piVar1[0xb] = iStack_2c;
  *(undefined8 *)(piVar1 + 0xc) = uVar2;
  *param_1 = (int)piVar1;
  param_1[1] = (int)&DAT_01889408;
  return;
}

