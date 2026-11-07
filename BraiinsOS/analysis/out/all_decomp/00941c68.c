// FUN_00941c68 @ 00941c68 size=316 calls_out=2 calls_in=1
// strings: 

void FUN_00941c68(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  int local_24;
  int iStack_20;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < uVar3) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      uVar6 = uVar5 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 == 0x6e) {
          uVar6 = uVar4 + 1;
          *(uint *)(param_2 + 0x14) = uVar6;
          uVar5 = uVar3;
          if (uVar3 < uVar6) {
            uVar5 = uVar6;
          }
          if (uVar6 < uVar3) {
            iVar2 = *(int *)(param_2 + 0xc);
            cVar1 = *(char *)(iVar2 + uVar6);
            uVar3 = uVar4 + 2;
            *(uint *)(param_2 + 0x14) = uVar3;
            if ((cVar1 == 'u') && (uVar3 != uVar5)) {
              cVar1 = *(char *)(iVar2 + uVar3);
              uVar3 = uVar4 + 3;
              *(uint *)(param_2 + 0x14) = uVar3;
              if ((cVar1 == 'l') &&
                 ((uVar3 != uVar5 &&
                  (cVar1 = *(char *)(iVar2 + uVar3), *(uint *)(param_2 + 0x14) = uVar4 + 4,
                  cVar1 == 'l')))) {
                *param_1 = -0x80000000;
                return;
              }
            }
          }
          iVar2 = FUN_005b8c9c(param_2,&local_28);
          *param_1 = -0x7fffffff;
          param_1[1] = iVar2;
          return;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (uVar3 != uVar4);
  }
  FUN_008fb41c(&local_28);
  if (local_28 == -0x80000000) {
    *param_1 = -0x7fffffff;
    param_1[1] = local_24;
    return;
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = iStack_20;
  return;
}

