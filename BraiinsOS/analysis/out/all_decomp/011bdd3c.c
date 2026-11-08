// FUN_011bdd3c @ 011bdd3c size=644 calls_out=9 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x011bddd4) */

void FUN_011bdd3c(int *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_44;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar6 = FUN_011bdfc0(param_2);
  if (iVar6 != 0) {
LAB_011bdd5c:
    *param_1 = 0;
    param_1[1] = iVar6;
    return;
  }
  iVar6 = param_2 + 0xc;
  uVar7 = 0;
  while (*(char *)(param_2 + 0x28) == '\x01') {
    uVar7 = (uint)*(byte *)(param_2 + 0x29);
    bVar4 = false;
LAB_011bde24:
    bVar5 = true;
    bVar3 = true;
    if (bVar4) goto LAB_011bde90;
    if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) goto LAB_011bdeb8;
    uVar1 = *(undefined1 *)(param_2 + 0x29);
    cVar2 = *(char *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    if ((cVar2 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
      iVar8 = *(int *)(param_2 + 0x14);
      if (iVar8 == *(int *)(param_2 + 0xc)) {
        FUN_006029c0(iVar6);
      }
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar1;
      *(int *)(param_2 + 0x14) = iVar8 + 1;
    }
  }
  FUN_011ef738(&local_30,param_2 + 0x18);
  bVar3 = false;
  if ((local_30 & 0xff) != 5) {
    if ((local_30 & 0xff) == 4) {
      uVar7 = (uint)local_30._1_1_;
      *(byte *)(param_2 + 0x29) = local_30._1_1_;
      *(undefined1 *)(param_2 + 0x28) = 1;
      bVar4 = bVar3;
    }
    else {
      local_44 = FUN_0157c4a0(local_30,local_2c);
      bVar4 = true;
    }
    goto LAB_011bde24;
  }
  bVar5 = false;
LAB_011bde90:
  if (!bVar3) {
    if (bVar5) {
LAB_011bdeb8:
      if (uVar7 == 0x22) {
        uVar1 = *(undefined1 *)(param_2 + 0x29);
        cVar2 = *(char *)(param_2 + 0x28);
        *(undefined1 *)(param_2 + 0x28) = 0;
        if ((cVar2 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
          iVar8 = *(int *)(param_2 + 0x14);
          if (iVar8 == *(int *)(param_2 + 0xc)) {
            FUN_006029c0(iVar6);
          }
          *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar8) = uVar1;
          *(int *)(param_2 + 0x14) = iVar8 + 1;
        }
        *(undefined4 *)(param_2 + 8) = 0;
        FUN_011bca9c(&local_30,iVar6,param_2);
        if (local_30 == 2) {
          *param_1 = 0;
          param_1[1] = local_2c;
          return;
        }
        FUN_0112691c(&local_38,local_2c,local_28);
        if (local_38 != 0) {
          *param_1 = local_38;
          param_1[1] = local_34;
          return;
        }
      }
      else {
        local_34 = FUN_011c34d0(param_2,&local_30);
      }
      iVar6 = FUN_011da120(local_34,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20))
      ;
      goto LAB_011bdd5c;
    }
    local_30 = 5;
    local_44 = FUN_0157c50c(&local_30,*(undefined4 *)(param_2 + 0x1c),
                            *(undefined4 *)(param_2 + 0x20));
  }
  *param_1 = 0;
  param_1[1] = local_44;
  return;
}

