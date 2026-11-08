// FUN_0131cfe0 @ 0131cfe0 size=452 calls_out=8 calls_in=1
// strings: capacity overflow | assertion failed: new_cap >= len | capacity overflow

void FUN_0131cfe0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r5;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_28;
  uint local_24;
  
  uVar1 = param_1[9];
  uVar3 = uVar1;
  if ((uVar1 < 9) || (uVar3 = param_1[1], uVar3 != 0xffffffff)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0xffffffff >> LZCOUNT(uVar3);
    }
    uVar3 = uVar4 + 1;
    if (uVar4 != 0xffffffff) {
      if (uVar1 < 9) {
        puVar7 = param_1 + 1;
        uVar5 = 8;
        uVar6 = uVar1;
      }
      else {
        puVar7 = (undefined4 *)param_1[2];
        uVar5 = uVar1;
        uVar6 = param_1[1];
      }
      if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
      }
      if (uVar4 < 8) {
        if (8 < uVar1) {
          *param_1 = 0;
          FUN_01bed4e2(param_1 + 1,puVar7,uVar6 << 2);
          local_24 = uVar5 << 2;
          bVar8 = 0x3ffffffe < uVar5;
          if (uVar5 < 0x40000000) {
            bVar8 = 0x7ffffffc < local_24;
          }
          param_1[9] = uVar6;
          if (bVar8) {
            local_28 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01ce4d2c,&DAT_01d2ebc8);
          }
          thunk_FUN_01be4678(puVar7);
          return;
        }
      }
      else if (uVar3 != uVar5) {
        bVar9 = 0x3ffffffd < uVar4;
        bVar8 = uVar4 == 0x3ffffffe;
        if (uVar4 < 0x3fffffff) {
          unaff_r5 = uVar3 * 4;
          bVar9 = 0x7ffffffb < unaff_r5;
          bVar8 = unaff_r5 == 0x7ffffffc;
        }
        if (bVar9 && !bVar8) {
LAB_0131d0cc:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("capacity overflow",0x11,&DAT_01d2ebd8);
        }
        if (uVar1 < 9) {
          iVar2 = FUN_01298504(unaff_r5,4);
          if (iVar2 == 0) {
LAB_0131d198:
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,unaff_r5);
          }
          FUN_01bed4e2(iVar2,puVar7,uVar6 << 2);
        }
        else {
          bVar9 = 0x3ffffffe < uVar5;
          bVar8 = uVar5 == 0x3fffffff;
          if (uVar5 < 0x40000000) {
            uVar4 = uVar5 << 2;
            bVar9 = 0x7ffffffb < uVar4;
            bVar8 = uVar4 == 0x7ffffffc;
          }
          if (bVar9 && !bVar8) goto LAB_0131d0cc;
          iVar2 = FUN_01298554(puVar7,uVar4,4,unaff_r5);
          if (iVar2 == 0) goto LAB_0131d198;
        }
        param_1[9] = uVar3;
        *param_1 = 1;
        param_1[1] = uVar6;
        param_1[2] = iVar2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

