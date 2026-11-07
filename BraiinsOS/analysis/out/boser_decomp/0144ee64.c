// FUN_0144ee64 @ 0144ee64 size=492 calls_out=8 calls_in=1
// strings: assertion failed: new_cap >= len | capacity overflow

void FUN_0144ee64(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r10;
  undefined4 *puVar8;
  undefined4 local_2c;
  int local_28;
  
  uVar1 = param_1[0x19];
  uVar3 = uVar1;
  if ((uVar1 < 9) || (uVar3 = param_1[1], uVar3 != 0xffffffff)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0xffffffff >> LZCOUNT(uVar3);
    }
    uVar3 = uVar4 + 1;
    if (uVar4 != 0xffffffff) {
      if (uVar1 < 9) {
        puVar8 = param_1 + 1;
        uVar6 = 8;
        uVar7 = uVar1;
      }
      else {
        puVar8 = (undefined4 *)param_1[2];
        uVar6 = uVar1;
        uVar7 = param_1[1];
      }
      if (uVar3 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
      }
      uVar5 = 0x80000001;
      if (uVar4 < 8) {
        if (8 < uVar1) {
          *param_1 = 0;
          FUN_01bed4e2(param_1 + 1,puVar8,uVar7 * 0xc);
          param_1[0x19] = uVar7;
          if (0xaaaaaaa < uVar6) {
            local_28 = uVar6 * 0xc;
            local_2c = 0;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cf92ec,&DAT_01d2ebc8);
          }
          thunk_FUN_01be4678(puVar8);
        }
      }
      else if (uVar3 != uVar6) {
        uVar5 = 0;
        unaff_r10 = (uint)((ulonglong)uVar3 * 0xc);
        if (((int)((ulonglong)uVar3 * 0xc >> 0x20) == 0) && (unaff_r10 < 0x7ffffffd)) {
          if (uVar1 < 9) {
            uVar5 = 4;
            iVar2 = FUN_01298504(unaff_r10,4);
            if (iVar2 == 0) goto LAB_0144ef28;
            FUN_01bed4e2(iVar2,puVar8,uVar7 * 0xc);
          }
          else {
            uVar1 = (uint)((ulonglong)uVar6 * 0xc);
            if ((int)((ulonglong)uVar6 * 0xc >> 0x20) != 0) {
              unaff_r10 = uVar1;
              goto LAB_0144ef28;
            }
            if (0x7ffffffc < uVar1) goto LAB_0144ef28;
            uVar5 = 4;
            iVar2 = FUN_01298554(puVar8,uVar1,4,unaff_r10);
            if (iVar2 == 0) goto LAB_0144ef28;
          }
          param_1[0x19] = uVar3;
          *param_1 = 1;
          param_1[1] = uVar7;
          param_1[2] = iVar2;
          uVar5 = 0x80000001;
        }
      }
LAB_0144ef28:
      FUN_01ab1588(uVar5,unaff_r10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

