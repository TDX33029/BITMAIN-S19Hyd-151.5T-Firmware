// FUN_011bfde4 @ 011bfde4 size=844 calls_out=6 calls_in=2
// strings: 

void FUN_011bfde4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  cVar1 = *(char *)(param_2 + 0x29);
  cVar2 = *(char *)(param_2 + 0x28);
  *(undefined1 *)(param_2 + 0x28) = 0;
  if (cVar2 == '\x01') {
    iVar6 = *(int *)(param_2 + 0xc);
joined_r0x011bfea0:
    if (iVar6 == -0x80000000) {
      if (cVar1 != '0') goto LAB_011bfec8;
LAB_011bfe24:
      if (*(char *)(param_2 + 0x28) == '\x01') {
        uVar7 = (uint)*(byte *)(param_2 + 0x29);
        bVar5 = true;
      }
      else {
        FUN_011ef738(&local_38,param_2 + 0x18);
        uVar7 = 0;
        bVar5 = false;
        if ((local_38 & 0xff) != 5) {
          if ((local_38 & 0xff) != 4) goto LAB_011c0120;
          uVar7 = (uint)local_38._1_1_;
          bVar5 = true;
          *(byte *)(param_2 + 0x29) = local_38._1_1_;
          *(undefined1 *)(param_2 + 0x28) = 1;
        }
      }
      if ((!bVar5) || (9 < uVar7 - 0x30)) {
        FUN_011c0268(param_1,param_2,param_3);
        return;
      }
    }
    else {
      iVar11 = *(int *)(param_2 + 0x14);
      if (iVar11 == iVar6) {
        FUN_006029c0(param_2 + 0xc);
      }
      *(char *)(*(int *)(param_2 + 0x10) + iVar11) = cVar1;
      *(int *)(param_2 + 0x14) = iVar11 + 1;
      if (cVar1 == '0') goto LAB_011bfe24;
LAB_011bfec8:
      if ((byte)(cVar1 - 0x31U) < 9) {
        uVar4 = (ulonglong)(byte)(cVar1 - 0x30);
        while( true ) {
          uVar7 = (uint)(uVar4 >> 0x20);
          if (*(char *)(param_2 + 0x28) == '\x01') {
            uVar8 = (uint)*(byte *)(param_2 + 0x29);
          }
          else {
            FUN_011ef738(&local_38,param_2 + 0x18);
            uVar8 = 0;
            if ((local_38 & 0xff) != 5) {
              if ((local_38 & 0xff) != 4) {
                uVar9 = FUN_0157c4a0(local_38,local_34);
                *param_1 = 3;
                param_1[1] = 0;
                param_1[2] = uVar9;
                return;
              }
              uVar8 = (uint)local_38._1_1_;
              *(byte *)(param_2 + 0x29) = local_38._1_1_;
              *(undefined1 *)(param_2 + 0x28) = 1;
            }
          }
          uVar12 = uVar8 - 0x30 & 0xff;
          if (9 < uVar12) break;
          if ((0x19999998 < uVar7 && (uint)((uint)uVar4 < 0x99999999) <= 0x19999999 - uVar7) &&
             ((uVar4 != 0x1999999999999999 || (5 < uVar12)))) {
            FUN_011b9b20(&local_38,param_2,param_3);
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
          uVar3 = *(undefined1 *)(param_2 + 0x29);
          cVar1 = *(char *)(param_2 + 0x28);
          *(undefined1 *)(param_2 + 0x28) = 0;
          if ((cVar1 == '\x01') && (*(int *)(param_2 + 0xc) != -0x80000000)) {
            iVar6 = *(int *)(param_2 + 0x14);
            if (iVar6 == *(int *)(param_2 + 0xc)) {
              FUN_006029c0(param_2 + 0xc);
            }
            *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar6) = uVar3;
            *(int *)(param_2 + 0x14) = iVar6 + 1;
          }
          uVar4 = (uVar4 & 0xffffffff) * 10 +
                  (CONCAT44(uVar7 * 10,uVar8 - 0x30) & 0xffffffff000000ff);
        }
        FUN_011c0268(param_1,param_2,param_3);
        return;
      }
    }
    uVar9 = *(undefined4 *)(param_2 + 0x1c);
    uVar10 = *(undefined4 *)(param_2 + 0x20);
    local_38 = 0xd;
  }
  else {
    FUN_011ef738(&local_38,param_2 + 0x18);
    if ((local_38 & 0xff) != 5) {
      if ((local_38 & 0xff) == 4) {
        iVar6 = *(int *)(param_2 + 0xc);
        cVar1 = local_38._1_1_;
        goto joined_r0x011bfea0;
      }
LAB_011c0120:
      uVar9 = FUN_0157c4a0(local_38,local_34);
      goto LAB_011bfe70;
    }
    uVar9 = *(undefined4 *)(param_2 + 0x1c);
    uVar10 = *(undefined4 *)(param_2 + 0x20);
    local_38 = 5;
  }
  uVar9 = FUN_0157c50c(&local_38,uVar9,uVar10);
LAB_011bfe70:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = uVar9;
  return;
}

