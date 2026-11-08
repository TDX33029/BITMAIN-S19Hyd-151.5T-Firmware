// FUN_01588080 @ 01588080 size=596 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01588080(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    local_60 = 4;
    iVar8 = *param_1;
    uVar12 = param_1[1];
    iVar7 = param_1[3];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_44 = 0;
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_54 = 0;
    local_58 = (uint)(local_50 != 0);
    local_5c = 0;
    local_64 = 0;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
LAB_01588110:
    uVar15 = FUN_01a41998(&local_58);
    iVar10 = (int)uVar15;
    if (iVar10 != 0) {
      if (iVar7 != 0) {
        uVar9 = *(undefined4 *)(iVar10 + 4);
        iVar10 = *(int *)(iVar10 + 8);
        uVar2 = FUN_01676700(param_1 + 4,uVar9,iVar10);
        uVar1 = uVar2 >> 0x19;
        iVar14 = 0;
        while( true ) {
          uVar2 = uVar12 & uVar2;
          uVar11 = *(uint *)(iVar8 + uVar2);
          uVar3 = uVar11 ^ uVar1 * 0x1010101;
          for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0;
              uVar3 = uVar3 - 1 & uVar3) {
            uVar13 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                     uVar12;
            iVar4 = iVar8 + -0x20 + uVar13 * -0x20;
            if ((iVar10 == *(int *)(iVar4 + 8)) &&
               (iVar4 = thunk_FUN_01bed842(uVar9,*(undefined4 *)(iVar4 + 4),iVar10), iVar4 == 0)) {
              local_34 = 0x80000000;
              local_30 = uVar9;
              local_2c = iVar10;
              local_28 = param_3;
              uVar15 = FUN_01576990(iVar8 + -0x14 + uVar13 * -0x20,(int)((ulonglong)uVar15 >> 0x20),
                                    &local_34,param_4,param_5);
              FUN_014fb9d0(&local_64,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
              goto LAB_01588110;
            }
          }
          if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
          iVar14 = iVar14 + 4;
          uVar2 = uVar2 + iVar14;
        }
      }
      goto LAB_01588110;
    }
    local_50 = local_64;
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    puVar5 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar6 = &UNK_01cfc168;
    *puVar5 = local_58;
    puVar5[1] = local_54;
    puVar5[2] = local_50;
    puVar5[3] = local_4c;
  }
  else {
    puVar5 = (uint *)&DAT_00000001;
    puVar6 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar6,puVar5);
}

