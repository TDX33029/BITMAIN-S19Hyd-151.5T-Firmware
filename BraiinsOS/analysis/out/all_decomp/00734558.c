// FUN_00734558 @ 00734558 size=628 calls_out=6 calls_in=0
// strings: failed to write frame to transport | failed to write frame to transport

/* WARNING: Removing unreachable block (ram,0x00734734) */

void FUN_00734558(uint *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_48;
  uint local_44;
  uint local_40;
  undefined4 uStack_3c;
  byte local_38;
  undefined2 local_37;
  undefined1 local_35;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  uVar6 = thunk_FUN_016de0ee(param_1,0x40);
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  iVar3 = (int)uVar6 + uVar2;
  if (*(char *)(iVar3 + 0x38) == '\x01') {
LAB_007345b4:
    uVar2 = (uint)(*(char *)(iVar3 + 0x31) != '\0');
    uVar5 = ~(uint)*(byte *)(iVar3 + 0x30) & 1 | uVar2;
    iVar3 = *(int *)(param_2 + 0x54);
  }
  else {
    if (*(char *)(iVar3 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar3,FUN_009948a0);
      *(undefined1 *)(iVar3 + 0x38) = 1;
      goto LAB_007345b4;
    }
    iVar3 = *(int *)(param_2 + 0x54);
    uVar5 = 2;
  }
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_2 + 0x50);
    if (*(uint *)(iVar4 + 0xb8) <= *(uint *)(iVar4 + 0xac)) {
      do {
        if (*(int *)(iVar4 + 0xac) == 0) goto LAB_007345f8;
        FUN_00754020(&local_38,iVar4,param_3,iVar4 + 0xa8);
        uVar2 = (uint)local_38;
        if (uVar2 == 5) goto LAB_0073477c;
        if (uVar2 != 4) {
          local_30._3_1_ = local_35;
          local_30._1_2_ = local_37;
          goto LAB_00734768;
        }
      } while (local_34 != 0);
      FUN_015e79d4(&local_2c,0x17,"failed to write frame to transport",0x22);
      local_30 = 0x80000000;
      local_34 = local_28;
      uVar2 = local_2c;
      goto LAB_007347b8;
    }
LAB_007345f8:
    *(undefined4 *)(param_2 + 0x54) = 0;
    local_44 = *(uint *)(param_2 + 0x58);
    local_40 = *(uint *)(param_2 + 0x5c);
    uStack_3c = *(undefined4 *)(param_2 + 0x60);
    local_48 = iVar3;
    FUN_0110f9a0(&local_30,iVar4 + 0x10,&local_48,iVar4 + 0xa8);
    uVar2 = extraout_r1;
    if (local_30 != 0x80000002) {
      local_34 = local_28;
      uVar2 = local_2c;
      if (local_30 == 0x80000003) {
LAB_0073477c:
        iVar3 = FUN_016540e8((uint)(uVar5 == 2) | uVar5 & 1,param_2,*param_3);
        if (iVar3 == 0) {
          puVar1 = (undefined1 *)0x80000003;
        }
        else {
          puVar1 = &DAT_80000004;
        }
        *param_1 = (uint)puVar1;
        return;
      }
      goto LAB_007347b8;
    }
  }
  iVar3 = *(int *)(param_2 + 0x50);
  do {
    if (*(int *)(iVar3 + 0xac) == 0) {
      local_30 = 0x80000002;
      local_34 = 0;
      goto LAB_007347b8;
    }
    FUN_00754020(&local_30,iVar3,param_3,iVar3 + 0xa8);
    uVar2 = local_30 & 0xff;
    if (uVar2 == 5) goto LAB_0073477c;
    if (uVar2 != 4) {
      local_34 = local_2c;
LAB_00734768:
      uVar2 = uVar2 | (uint)CONCAT12(local_30._3_1_,local_30._1_2_) << 8;
      local_30 = 0x80000000;
      goto LAB_007347b8;
    }
    uVar2 = 4;
  } while (local_2c != 0);
  FUN_015e79d4(&local_44,0x17,"failed to write frame to transport",0x22);
  local_30 = 0x80000000;
  local_34 = local_40;
  uVar2 = local_44;
LAB_007347b8:
  *param_1 = local_30;
  param_1[1] = uVar2;
  param_1[2] = local_34;
  return;
}

