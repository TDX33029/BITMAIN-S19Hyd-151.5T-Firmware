// FUN_00943ad8 @ 00943ad8 size=348 calls_out=2 calls_in=1
// strings: 

void FUN_00943ad8(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar4) {
    do {
      uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar5);
      uVar7 = uVar6 - 9;
      if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
        if (uVar6 == 0x6e) {
          uVar7 = uVar5 + 1;
          *(uint *)(param_2 + 0x14) = uVar7;
          uVar6 = uVar4;
          if (uVar4 < uVar7) {
            uVar6 = uVar7;
          }
          if (uVar7 < uVar4) {
            iVar2 = *(int *)(param_2 + 0xc);
            cVar1 = *(char *)(iVar2 + uVar7);
            uVar4 = uVar5 + 2;
            *(uint *)(param_2 + 0x14) = uVar4;
            if ((cVar1 == 'u') && (uVar4 != uVar6)) {
              cVar1 = *(char *)(iVar2 + uVar4);
              uVar4 = uVar5 + 3;
              *(uint *)(param_2 + 0x14) = uVar4;
              if ((cVar1 == 'l') &&
                 ((uVar4 != uVar6 &&
                  (cVar1 = *(char *)(iVar2 + uVar4), *(uint *)(param_2 + 0x14) = uVar5 + 4,
                  cVar1 == 'l')))) {
                *param_1 = 0;
                param_1[1] = 0;
                return;
              }
            }
          }
          uVar3 = FUN_005b8c9c(param_2,&local_28);
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = uVar3;
          return;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x14) = uVar5;
    } while (uVar4 != uVar5);
  }
  FUN_008fab2c(&local_28);
  if (local_28 == 1) {
    param_1[2] = local_24;
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  *(undefined8 *)(param_1 + 2) = local_20;
  *param_1 = 1;
  param_1[1] = 0;
  return;
}

