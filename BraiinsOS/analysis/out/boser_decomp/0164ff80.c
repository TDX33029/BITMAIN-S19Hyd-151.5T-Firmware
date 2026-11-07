// FUN_0164ff80 @ 0164ff80 size=488 calls_out=8 calls_in=2
// strings: assertion failed: new_cap >= len | capacity overflow | capacity overflow

void FUN_0164ff80(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_28;
  int local_24;
  
  uVar2 = param_1[0x19];
  uVar4 = uVar2;
  if ((uVar2 < 9) || (uVar4 = param_1[1], uVar4 != 0xffffffff)) {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = 0xffffffff >> LZCOUNT(uVar4);
    }
    uVar4 = uVar5 + 1;
    if (uVar5 != 0xffffffff) {
      if (uVar2 < 9) {
        puVar8 = param_1 + 1;
        uVar6 = 8;
        uVar7 = uVar2;
      }
      else {
        puVar8 = (undefined4 *)param_1[2];
        uVar6 = uVar2;
        uVar7 = param_1[1];
      }
      if (uVar4 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
      }
      if (uVar5 < 8) {
        if (8 < uVar2) {
          *param_1 = 0;
          FUN_01bed4e2(param_1 + 1,puVar8,uVar7 * 0xc);
          param_1[0x19] = uVar7;
          if (0xaaaaaaa < uVar6) {
            local_24 = uVar6 * 0xc;
            local_28 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d068f8,&DAT_01d2ebc8);
          }
          thunk_FUN_01be4678(puVar8);
          return;
        }
      }
      else if (uVar4 != uVar6) {
        if (0xaaaaaa9 < uVar5) {
LAB_0165010c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("capacity overflow",0x11,&DAT_01d2ebd8);
        }
        iVar1 = uVar4 * 0xc;
        if (uVar2 < 9) {
          iVar3 = FUN_01298504(iVar1,4);
          if (iVar3 == 0) {
LAB_0165015c:
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,iVar1);
          }
          FUN_01bed4e2(iVar3,puVar8,uVar7 * 0xc);
        }
        else {
          if (0xaaaaaaa < uVar6) goto LAB_0165010c;
          iVar3 = FUN_01298554(puVar8,uVar6 * 0xc,4,iVar1);
          if (iVar3 == 0) goto LAB_0165015c;
        }
        param_1[0x19] = uVar4;
        *param_1 = 1;
        param_1[1] = uVar7;
        param_1[2] = iVar3;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

