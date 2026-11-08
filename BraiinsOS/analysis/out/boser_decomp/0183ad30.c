// FUN_0183ad30 @ 0183ad30 size=680 calls_out=8 calls_in=5
// strings: 

void FUN_0183ad30(uint *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined2 local_28;
  
  uVar4 = param_4[1];
  uVar6 = param_4[2];
  if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar6,uVar4,uVar4,&DAT_01d2cefc);
  }
  iVar3 = *param_4;
  uVar2 = 1;
  uVar5 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x2e0)) {
  default:
    if ((*(byte *)(param_2 + 0x2e0) & 1) == 0) {
      bVar8 = false;
      do {
        uVar2 = *(uint *)(param_2 + 0x1fc);
        bVar7 = uVar2 != 0;
        if (!bVar7) {
          uVar2 = (uint)*(byte *)(param_2 + 0x267);
        }
        if ((bVar7 || (uVar2 & 1) != 0) ||
           ((*(char *)(param_2 + 0x262) == '\0' && (*(int *)(param_2 + 0x218) != 0))))
        goto LAB_0183ae24;
        FUN_01863398(&local_38,param_2,param_2 + 0x10,param_3);
        if ((local_38 & 0xff) != 4) {
          bVar8 = true;
          if ((local_38 & 0xff) == 5) goto LAB_0183ae24;
          uVar4 = local_34;
          goto LAB_0183af44;
        }
      } while (local_34 != 0);
      bVar8 = false;
    }
    else {
      bVar8 = false;
    }
LAB_0183ae24:
    local_2c = param_2 + 0x1e8;
    local_28 = *(undefined2 *)(param_2 + 0x267);
    FUN_01919a3c(&local_38,&local_2c);
    if (local_38 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(local_34 & 0xff) {
      case 0:
        uVar4 = FUN_016f6c0c(local_30);
        uVar4 = uVar4 & 0xff;
        break;
      case 1:
        uVar4 = local_34 >> 8 & 0xff;
        break;
      default:
        uVar4 = (uint)*(byte *)(local_30 + 8);
      }
      if (uVar4 == 0xd) {
        if (!bVar8) {
          (**(code **)(*(int *)*param_3 + 8))(((int *)*param_3)[1]);
        }
        lVar9 = FUN_0069263c(local_34,local_30);
        local_38 = 5;
LAB_0183afb8:
        *param_1 = local_38 & 0xff | (uint)(lVar9 << 8);
        param_1[1] = (uint)((ulonglong)lVar9 >> 0x18);
        return;
      }
      local_38 = local_34;
      uVar4 = local_30;
LAB_0183af44:
      uVar2 = local_38 >> 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(local_38 & 0xff) {
      case 0:
        uVar2 = FUN_016f6c0c(uVar4);
        uVar2 = uVar2 & 0xff;
        break;
      case 1:
        break;
      default:
        uVar2 = (uint)*(byte *)(uVar4 + 8);
      }
      bVar1 = (byte)uVar2;
      bVar8 = (uVar2 & 0xff) == 6;
      if (bVar8) {
        bVar1 = *(byte *)(param_2 + 0x2e0);
      }
      uVar5 = 0;
      if (bVar8) {
        *(byte *)(param_2 + 0x2e0) = bVar1 | 1;
      }
      if ((local_38 & 0xff) != 4) {
        lVar9 = CONCAT44(uVar4 >> 8,local_38 >> 8 | uVar4 << 0x18);
        goto LAB_0183afb8;
      }
      goto LAB_0183aebc;
    }
    uVar2 = local_34;
    uVar5 = local_30;
    if (local_30 == 0) {
      *(byte *)(param_2 + 0x2e0) = *(byte *)(param_2 + 0x2e0) | 1;
    }
    break;
  case 1:
  case 3:
    break;
  }
  if (uVar4 - uVar6 < uVar5) {
    uVar5 = uVar4 - uVar6;
  }
  FUN_01bed4e2(iVar3 + uVar6,uVar2,uVar5);
  FUN_019199ec(param_2 + 0x1e8,uVar5);
LAB_0183aebc:
  uVar4 = uVar5 + uVar6;
  if (CARRY4(uVar5,uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_00570520,8,&DAT_01d2cf0c);
  }
  uVar6 = param_4[3];
  *(undefined1 *)param_1 = 4;
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  param_4[2] = uVar4;
  param_4[3] = uVar6;
  return;
}

