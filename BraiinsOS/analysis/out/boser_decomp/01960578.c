// FUN_01960578 @ 01960578 size=260 calls_out=3 calls_in=4
// strings: 

void FUN_01960578(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 != 0) {
    iVar6 = *(int *)(param_1 + 4);
    uVar5 = 0;
    iVar2 = iVar6;
    do {
      iVar4 = iVar2 + 0xd0;
      if (((*(int *)(iVar2 + 0xc4) != -0x80000000) && (*(int *)(iVar2 + 0xcc) == param_2[1])) &&
         (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar2 + 200),*param_2), iVar1 == 0)) {
        FUN_005f6b0c(iVar2);
        if (uVar5 + 1 < uVar3) {
          uVar7 = uVar5 + 2;
          do {
            if (((*(int *)(iVar4 + 0xc4) == -0x80000000) || (*(int *)(iVar4 + 0xcc) != param_2[1]))
               || (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar4 + 200),*param_2), iVar2 != 0)) {
              FUN_01bed4e2(uVar5 * 0xd0 + iVar6,iVar4,0xd0);
              uVar5 = uVar5 + 1;
            }
            else {
              FUN_005f6b0c(iVar4);
            }
            iVar4 = iVar4 + 0xd0;
            bVar8 = uVar7 < uVar3;
            uVar7 = uVar7 + 1;
          } while (bVar8);
        }
        *(uint *)(param_1 + 8) = uVar5;
        return;
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar4;
    } while (uVar3 != uVar5);
  }
  return;
}

