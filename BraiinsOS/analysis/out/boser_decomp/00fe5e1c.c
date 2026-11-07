// FUN_00fe5e1c @ 00fe5e1c size=400 calls_out=6 calls_in=0
// strings: 

void FUN_00fe5e1c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < uVar2) {
    do {
      uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      uVar6 = uVar5 - 9;
      if ((0x17 < uVar6) || ((1 << (uVar6 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 != 0x6e) goto LAB_00fe5e84;
        *(uint *)(param_2 + 0x14) = uVar4 + 1;
        iVar1 = FUN_012c6b8c(param_2,"ull",3);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 2;
          param_1[1] = iVar1;
        }
        goto LAB_00fe5f78;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar4;
    } while (uVar2 != uVar4);
  }
  else {
LAB_00fe5e84:
    if (uVar4 < uVar2) {
      do {
        uVar5 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar4);
        if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar5 == 0x2d) {
            *(uint *)(param_2 + 0x14) = uVar4 + 1;
            uVar3 = 0;
LAB_00fe5f10:
            FUN_012c751c(&local_30,param_2,uVar3);
            if (local_30 == 3 && iStack_2c == 0) goto LAB_00fe5f28;
            uVar7 = FUN_00677a00(&local_30);
            local_28 = (undefined4)(uVar7 >> 0x20);
            uVar3 = 1;
            if ((uVar7 & 1) == 0) goto LAB_00fe5f44;
          }
          else {
            if (uVar5 - 0x30 < 10) {
              uVar3 = 1;
              goto LAB_00fe5f10;
            }
            local_28 = FUN_012c7788(param_2,&uStack_19,&DAT_01c1ab20);
          }
          local_28 = FUN_0127dee8(local_28,param_2);
          goto LAB_00fe5f28;
        }
        uVar4 = uVar4 + 1;
        *(uint *)(param_2 + 0x14) = uVar4;
      } while (uVar2 != uVar4);
    }
  }
  local_30 = 5;
  local_28 = FUN_012c6b30(param_2,&local_30);
LAB_00fe5f28:
  uVar3 = 2;
LAB_00fe5f44:
  param_1[1] = local_28;
LAB_00fe5f78:
  *param_1 = uVar3;
  return;
}

