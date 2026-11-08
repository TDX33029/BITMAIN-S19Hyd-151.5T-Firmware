// FUN_013388b0 @ 013388b0 size=276 calls_out=5 calls_in=4
// strings: 

void FUN_013388b0(undefined4 *param_1,char param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_2 != '\x02') {
    *(char *)((int)param_1 + 5) = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 1;
    return;
  }
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  if (uVar3 == uVar2) {
    uVar1 = uVar3;
    if (uVar3 == *param_4) {
      FUN_015f37b0(param_4);
      uVar1 = param_4[3];
    }
    uVar5 = param_4[1];
    uVar2 = uVar3 + 1;
    param_4[2] = uVar2;
    puVar4 = (undefined4 *)(uVar5 + uVar3 * 0xc);
    *puVar4 = 0;
    puVar4[1] = 1;
    puVar4[2] = 0;
    uVar3 = uVar1;
  }
  else {
    if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,uVar2,&DAT_01890558);
    }
    uVar5 = param_4[1];
    *(undefined4 *)(uVar5 + uVar3 * 0xc + 8) = 0;
  }
  uVar1 = uVar3 + 1;
  param_4[3] = uVar1;
  if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,uVar2,&DAT_01890578);
  }
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890568);
  }
  FUN_0132e8a8(param_1,param_3,uVar5 + uVar3 * 0xc);
  return;
}

