// FUN_01ab17d0 @ 01ab17d0 size=484 calls_out=8 calls_in=1
// strings: assertion failed: new_cap >= len | capacity overflow

void FUN_01ab17d0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r10;
  undefined4 *puVar8;
  undefined4 local_2c;
  int local_28;
  
  uVar2 = param_1[0x52];
  uVar3 = uVar2;
  if ((uVar2 < 9) || (uVar3 = param_1[1], uVar3 != 0xffffffff)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0xffffffff >> LZCOUNT(uVar3);
    }
    uVar3 = uVar4 + 1;
    if (uVar4 != 0xffffffff) {
      uVar6 = 8;
      puVar8 = param_1 + 2;
      uVar7 = uVar2;
      if (8 < uVar2) {
        uVar7 = param_1[1];
        puVar8 = (undefined4 *)param_1[2];
        uVar6 = uVar2;
      }
      if (uVar3 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
      }
      uVar5 = 0x80000001;
      if (uVar4 < 8) {
        if (8 < uVar2) {
          *param_1 = 0;
          FUN_01bed4e2(param_1 + 2,puVar8,uVar7 * 0x28);
          param_1[0x52] = uVar7;
          if (0x3333333 < uVar6) {
            local_28 = uVar6 * 0x28;
            local_2c = 0;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01d2ebb8,&DAT_01d2ebc8);
          }
          thunk_FUN_01be4678(puVar8);
        }
      }
      else if (uVar3 != uVar6) {
        uVar5 = 0;
        unaff_r10 = (uint)((ulonglong)uVar3 * 0x28);
        if (((int)((ulonglong)uVar3 * 0x28 >> 0x20) == 0) && (unaff_r10 < 0x7ffffff9)) {
          if (uVar2 < 9) {
            uVar5 = 8;
            iVar1 = FUN_01298504(unaff_r10,8);
            if (iVar1 == 0) goto LAB_01ab188c;
            FUN_01bed4e2(iVar1,puVar8,uVar7 * 0x28);
          }
          else {
            uVar2 = (uint)((ulonglong)uVar6 * 0x28);
            if ((int)((ulonglong)uVar6 * 0x28 >> 0x20) != 0) {
              unaff_r10 = uVar2;
              goto LAB_01ab188c;
            }
            if (0x7ffffff8 < uVar2) goto LAB_01ab188c;
            uVar5 = 8;
            iVar1 = FUN_01298554(puVar8,uVar2,8,unaff_r10);
            if (iVar1 == 0) goto LAB_01ab188c;
          }
          param_1[0x52] = uVar3;
          *param_1 = 1;
          param_1[1] = uVar7;
          param_1[2] = iVar1;
          uVar5 = 0x80000001;
        }
      }
LAB_01ab188c:
      FUN_01ab1588(uVar5,unaff_r10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

