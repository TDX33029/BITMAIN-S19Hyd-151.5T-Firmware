// FUN_011b93e8 @ 011b93e8 size=472 calls_out=4 calls_in=2
// strings: 

void FUN_011b93e8(undefined4 *param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 < uVar8) {
    iVar9 = *(int *)(param_2 + 0xc);
    uVar4 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar4;
    cVar1 = *(char *)(iVar9 + uVar5);
    if (cVar1 == '0') {
      if ((uVar8 <= uVar4) || (9 < *(byte *)(iVar9 + uVar4) - 0x30)) {
        FUN_011b95c0();
        return;
      }
      local_38 = 0xd;
      uVar3 = FUN_011b933c(param_2,&local_38);
      goto LAB_011b9580;
    }
    if ((byte)(cVar1 - 0x31U) < 9) {
      if (uVar4 < uVar8) {
        uVar2 = (ulonglong)(byte)(cVar1 - 0x30);
        do {
          uVar5 = (uint)(uVar2 >> 0x20);
          uVar6 = *(byte *)(iVar9 + uVar4) - 0x30;
          uVar7 = uVar6 & 0xff;
          if (9 < uVar7) break;
          if ((0x19999998 < uVar5 && (uint)((uint)uVar2 < 0x99999999) <= 0x19999999 - uVar5) &&
             ((uVar2 != 0x1999999999999999 || (5 < uVar7)))) {
            FUN_01113860(&local_38);
            if (local_38 == 1) {
              param_1[2] = local_34;
              *param_1 = 3;
              param_1[1] = 0;
              return;
            }
            *(undefined8 *)(param_1 + 2) = local_30;
            *param_1 = 0;
            param_1[1] = 0;
            return;
          }
          uVar4 = uVar4 + 1;
          *(uint *)(param_2 + 0x14) = uVar4;
          uVar2 = (uVar2 & 0xffffffff) * 10 + (CONCAT44(uVar5 * 10,uVar6) & 0xffffffff000000ff);
        } while (uVar8 != uVar4);
      }
      FUN_011b95c0();
      return;
    }
    local_38 = 0xd;
  }
  else {
    local_38 = 5;
  }
  uVar3 = FUN_011b9398(param_2,&local_38);
LAB_011b9580:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = uVar3;
  return;
}

