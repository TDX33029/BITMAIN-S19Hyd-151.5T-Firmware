// FUN_01964ce0 @ 01964ce0 size=440 calls_out=4 calls_in=15
// strings: 

void FUN_01964ce0(undefined4 *param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar3) {
    iVar9 = *(int *)(param_2 + 0xc);
    uVar5 = uVar6 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    cVar1 = *(char *)(iVar9 + uVar6);
    if (cVar1 == '0') {
      if ((uVar5 < uVar3) && (*(byte *)(iVar9 + uVar5) - 0x30 < 10)) {
        local_38 = 0xd;
        uVar4 = FUN_01964674(param_2,&local_38);
        goto LAB_01964e2c;
      }
    }
    else {
      if (8 < (byte)(cVar1 - 0x31U)) {
        local_38 = 0xd;
        goto LAB_01964e18;
      }
      if (uVar5 < uVar3) {
        uVar2 = (ulonglong)(byte)(cVar1 - 0x30);
        do {
          uVar8 = (uint)(uVar2 >> 0x20);
          uVar6 = *(byte *)(iVar9 + uVar5) - 0x30;
          uVar7 = uVar6 & 0xff;
          if (9 < uVar7) break;
          if ((0x19999998 < uVar8 && (uint)((uint)uVar2 < 0x99999999) <= 0x19999999 - uVar8) &&
             ((uVar2 != 0x1999999999999999 || (5 < uVar7)))) {
            FUN_019653ec(&local_38);
            if (local_38 == 1) {
              param_1[2] = local_34;
              uVar4 = 3;
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 2) = local_30;
            }
            *param_1 = uVar4;
            param_1[1] = 0;
            return;
          }
          uVar5 = uVar5 + 1;
          *(uint *)(param_2 + 0x14) = uVar5;
          uVar2 = (uVar2 & 0xffffffff) * 10 + (CONCAT44(uVar8 * 10,uVar6) & 0xffffffff000000ff);
        } while (uVar3 != uVar5);
      }
    }
    FUN_019652e4(param_1);
  }
  else {
    local_38 = 5;
LAB_01964e18:
    uVar4 = FUN_01965294(param_2,&local_38);
LAB_01964e2c:
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = uVar4;
  }
  return;
}

