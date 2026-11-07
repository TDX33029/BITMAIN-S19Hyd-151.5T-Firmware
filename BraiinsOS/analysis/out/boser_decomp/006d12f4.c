// FUN_006d12f4 @ 006d12f4 size=248 calls_out=5 calls_in=2
// strings: Upload | The Upload type is only allowed to be defined on a mutation

void FUN_006d12f4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    cVar1 = *(char *)(param_2 + 0x34);
    iVar6 = *(int *)(param_2 + 0xc) + 0x58;
    iVar7 = *(int *)(param_2 + 0x10) * 0x70;
    do {
      iVar2 = FUN_006b1588(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x40),
                           *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x44),iVar6);
      if (iVar2 != 0 && cVar1 != '\x01') {
        iVar4 = 2;
        if (*(int *)(iVar2 + 0x10) < 0) {
          iVar4 = *(int *)(iVar2 + 0x10);
        }
        if ((*(int *)(iVar2 + *(int *)(iVar4 * 4 + 0x534d2c)) == 6) &&
           (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar2 + *(int *)(iVar4 * 4 + 0x534d14)),
                                       "Upload",6), iVar2 == 0)) {
          puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
          if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,8);
          }
          uVar5 = *(undefined4 *)(iVar6 + -0x54);
          *puVar3 = *(undefined4 *)(iVar6 + -0x58);
          puVar3[1] = uVar5;
          uStack_28 = 1;
          local_30 = 1;
          puStack_2c = puVar3;
          FUN_006d6cb4(param_1,&local_30,
                       "The Upload type is only allowed to be defined on a mutation",0x3b);
        }
      }
      iVar6 = iVar6 + 0x70;
      iVar7 = iVar7 + -0x70;
    } while (iVar7 != 0);
  }
  return;
}

