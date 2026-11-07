// FUN_00944800 @ 00944800 size=324 calls_out=2 calls_in=1
// strings: 

void FUN_00944800(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
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
                *param_1 = 5;
                param_1[1] = 0;
                return;
              }
            }
          }
          local_28 = FUN_005b8c9c(param_2,&local_30);
          goto LAB_00944870;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (uVar3 != uVar4);
  }
  FUN_00947348(&local_30);
  if (local_30 != 5 || iStack_2c != 0) {
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = local_28;
    param_1[3] = iStack_24;
    param_1[4] = iStack_20;
    param_1[5] = iStack_1c;
    return;
  }
LAB_00944870:
  *param_1 = 6;
  param_1[1] = 0;
  param_1[2] = local_28;
  return;
}

