// FUN_0150ec7c @ 0150ec7c size=688 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_0150ec7c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
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
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_60 = 4;
    if (local_50 == 0) {
      local_38 = 0;
    }
    iVar11 = *param_1;
    uVar12 = param_1[1];
    iVar9 = param_1[3];
    local_44 = 0;
    local_54 = 0;
    local_58 = (uint)(local_50 != 0);
    local_5c = 0;
    local_64 = 0;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
LAB_0150ed18:
    uVar17 = FUN_01a41998(&local_58);
    uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
    iVar10 = (int)uVar17;
    if (iVar10 != 0) {
      uVar8 = *(undefined4 *)(iVar10 + 4);
      iVar10 = *(int *)(iVar10 + 8);
      if (iVar9 != 0) {
        uVar2 = FUN_0155d010(param_1 + 4,uVar8,iVar10);
        uVar1 = uVar2 >> 0x19;
        iVar16 = 0;
        while( true ) {
          uVar2 = uVar12 & uVar2;
          uVar14 = *(uint *)(iVar11 + uVar2);
          uVar3 = uVar14 ^ uVar1 * 0x1010101;
          for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0;
              uVar3 = uVar3 - 1 & uVar3) {
            uVar15 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                     uVar12;
            iVar4 = iVar11 + -0x20 + uVar15 * -0x20;
            if (iVar10 == *(int *)(iVar4 + 8)) {
              uVar13 = *(undefined4 *)(iVar4 + 4);
              iVar4 = thunk_FUN_01bed842(uVar8,uVar13,iVar10);
              if (iVar4 == 0) {
                local_34 = 0x80000000;
                local_30 = uVar13;
                local_2c = iVar10;
                local_28 = param_3;
                uVar17 = FUN_01576990(iVar11 + -0x14 + uVar15 * -0x20,uVar6,&local_34,param_4,
                                      param_5);
                FUN_014fb9d0(&local_64,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
                goto LAB_0150ed18;
              }
            }
          }
          if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
          iVar16 = iVar16 + 4;
          uVar2 = uVar2 + iVar16;
        }
      }
      local_34 = 0x80000000;
      local_30 = uVar8;
      local_2c = iVar10;
      local_28 = param_3;
      uVar17 = FUN_01576990(param_1 + 0xc,uVar6,&local_34,param_4,param_5);
      FUN_014fb9d0(&local_64,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      goto LAB_0150ed18;
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
    puVar7 = &UNK_01cfa84c;
    *puVar5 = local_58;
    puVar5[1] = local_54;
    puVar5[2] = local_50;
    puVar5[3] = local_4c;
  }
  else {
    puVar5 = (uint *)&DAT_00000001;
    puVar7 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar7,puVar5);
}

