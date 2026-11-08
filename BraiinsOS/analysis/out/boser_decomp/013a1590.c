// FUN_013a1590 @ 013a1590 size=228 calls_out=4 calls_in=2
// strings: invalid key

void FUN_013a1590(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_200;
  int local_1fc;
  undefined1 auStack_1f8 [196];
  int local_134 [9];
  undefined1 auStack_110 [236];
  
  iVar4 = *param_1;
  uVar5 = param_1[1];
  if (uVar5 < *(uint *)(iVar4 + 0x38)) {
    iVar7 = *(int *)(iVar4 + 0x40);
    piVar2 = (int *)(*(int *)(iVar4 + 0x34) + uVar5 * 0xf0);
    iVar6 = *piVar2;
    iVar3 = piVar2[1];
    FUN_01bed4e2(auStack_110,piVar2 + 2,0xe8);
    piVar2[1] = 0;
    piVar2[2] = iVar7;
    *piVar2 = 3;
    if (iVar6 != 3 || iVar3 != 0) {
      FUN_01bed4e2(auStack_1f8,auStack_110,0xe8);
      *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + -1;
      *(uint *)(iVar4 + 0x40) = uVar5;
      local_200 = iVar6;
      local_1fc = iVar3;
      if (local_134[0] != param_1[2]) {
        FUN_013b808c(local_134,param_1 + 2);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13a1648);
        (*pcVar1)();
      }
      FUN_013a1694(&local_200);
      return;
    }
    FUN_01bed4e2(piVar2 + 2,auStack_110,0xe8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("invalid key",0xb,&DAT_01cede3c);
}

