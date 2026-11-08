// FUN_0141c10c @ 0141c10c size=220 calls_out=1 calls_in=2
// strings: 

int * FUN_0141c10c(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  piVar1 = (int *)0x0;
  if (param_1[2] != 2) {
    if ((param_1[2] & 1) == 0) {
      uVar3 = param_1[5];
      param_1[2] = 2;
      *param_1 = 2;
      uVar2 = *(uint *)(param_1[4] + 0x28);
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,uVar2,&DAT_01cf4560);
      }
      piVar1 = (int *)(uVar3 * 0x34 + *(int *)(param_1[4] + 0x24) + 0xc);
    }
    else {
      uVar3 = param_1[3];
      uVar2 = *(uint *)(param_1[4] + 0x34);
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,uVar2,&DAT_01cf4570);
      }
      uVar2 = *param_1;
      bVar4 = uVar2 == 1;
      if (bVar4) {
        uVar2 = param_1[1];
      }
      piVar1 = (int *)(*(int *)(param_1[4] + 0x30) + uVar3 * 0x24);
      if (bVar4 && uVar2 == uVar3) {
        param_1[2] = 2;
        *param_1 = 2;
      }
      else if (*piVar1 == 0) {
        param_1[2] = 0;
      }
      else {
        uVar2 = piVar1[1];
        param_1[2] = 1;
        param_1[3] = uVar2;
      }
      piVar1 = piVar1 + 4;
    }
  }
  return piVar1;
}

