// FUN_00d43fa4 @ 00d43fa4 size=780 calls_out=8 calls_in=1
// strings: 

void FUN_00d43fa4(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint unaff_s16;
  char local_50 [8];
  int local_48;
  undefined4 local_40;
  uint uStack_3c;
  undefined1 uStack_31;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    FUN_00c01f94(param_2);
    return;
  }
  if (*param_2 == '\x04') {
    iVar7 = *(int *)(param_2 + 0xc);
    pcVar5 = *(char **)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 4);
    pcVar6 = pcVar5;
    if (iVar7 == 0) {
LAB_00d44010:
      uVar3 = FUN_00f2c2f0(0,&uStack_31,&DAT_018777f0);
LAB_00d44028:
      bVar2 = true;
    }
    else {
      pcVar6 = pcVar5 + 0x18;
      cVar1 = *pcVar5;
      if (cVar1 == '\x06') goto LAB_00d44010;
      local_50[0] = cVar1;
      FUN_016dd1aa((uint)local_50 | 1,pcVar5 + 1,0x17);
      if (cVar1 != '\x02') {
        uVar3 = FUN_00f36124(local_50,&uStack_31,&DAT_01873d38);
        FUN_00c01f94(local_50);
        goto LAB_00d44028;
      }
      if (local_48 == 0) {
        uVar3 = FUN_0184589c();
joined_r0x00d440b4:
        if (iVar7 == 1) goto LAB_00d44100;
LAB_00d440ec:
        cVar1 = pcVar5[0x18];
        pcVar6 = pcVar5 + 0x30;
        if (cVar1 == '\x06') goto LAB_00d44100;
        local_50[0] = cVar1;
        FUN_016dd1aa((uint)local_50 | 1,pcVar5 + 0x19,0x17);
        if (cVar1 != '\x02') {
          uVar3 = FUN_00f36124(local_50,&uStack_31,&DAT_01873d38);
          FUN_00c01f94(local_50);
          goto LAB_00d44028;
        }
        if (local_48 == 0) {
          unaff_s16 = FUN_0184589c();
        }
        else if (local_48 == 1) {
          unaff_s16 = FUN_01845fc8();
        }
        else {
          uVar9 = 0xbf800000;
          if (uStack_3c < 0x80000000) {
            uVar9 = 0;
          }
          unaff_s16 = (uint)ABS((float)(double)CONCAT44(uStack_3c,local_40)) | uVar9 & 0x80000000;
        }
        if (iVar7 == 2) {
          bVar2 = false;
        }
        else {
          uVar3 = FUN_00f2c2f0(iVar7,&DAT_0188738c,&DAT_018ab990);
          bVar2 = true;
        }
      }
      else {
        if (local_48 != 1) {
          uVar3 = 0xbf800000;
          if (uStack_3c < 0x80000000) {
            uVar3 = 0;
          }
          uVar3 = (uint)ABS((float)(double)CONCAT44(uStack_3c,local_40)) | uVar3 & 0x80000000;
          goto joined_r0x00d440b4;
        }
        uVar3 = FUN_01845fc8();
        if (iVar7 != 1) goto LAB_00d440ec;
LAB_00d44100:
        bVar2 = true;
        uVar3 = FUN_00f2c2f0(1,&uStack_31,&DAT_018777f0);
      }
    }
    FUN_00ce0380(pcVar6,((uint)(pcVar5 + (iVar7 * 0x18 - (int)pcVar6)) >> 3) * -0x55555555);
    if (iVar8 != 0) {
      thunk_FUN_016d3fb4(pcVar5);
    }
    if (!bVar2) {
      uVar4 = 1;
      param_1[2] = unaff_s16;
      param_1[1] = uVar3;
      goto LAB_00d441fc;
    }
  }
  else {
    uVar3 = FUN_00f36124(param_2,&uStack_31,&DAT_018777f0);
    FUN_00c01f94(param_2);
  }
  param_1[1] = uVar3;
  uVar4 = 2;
LAB_00d441fc:
  *param_1 = uVar4;
  return;
}

