// FUN_00782dd0 @ 00782dd0 size=484 calls_out=8 calls_in=1
// strings: assertion failed: new_cap >= len | capacity overflow

void FUN_00782dd0(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint unaff_r10;
  undefined4 *puVar8;
  undefined4 local_2c;
  int local_28;
  
  puVar2 = (undefined *)param_1[0x7a];
  puVar4 = puVar2;
  if ((puVar2 < (undefined *)0x3) ||
     (puVar4 = (undefined *)param_1[1], puVar4 != (undefined *)0xffffffff)) {
    uVar3 = 0;
    if (puVar4 != (undefined *)0x0) {
      uVar3 = 0xffffffff >> LZCOUNT(puVar4);
    }
    puVar4 = (undefined *)(uVar3 + 1);
    if (uVar3 != 0xffffffff) {
      puVar6 = (undefined *)0x2;
      puVar8 = param_1 + 2;
      puVar7 = puVar2;
      if ((undefined *)0x2 < puVar2) {
        puVar7 = (undefined *)param_1[1];
        puVar8 = (undefined4 *)param_1[2];
        puVar6 = puVar2;
      }
      if (puVar4 < puVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
      }
      uVar5 = 0x80000001;
      if (uVar3 < 2) {
        if ((undefined *)0x2 < puVar2) {
          *param_1 = 0;
          FUN_01bed4e2(param_1 + 2,puVar8,(int)puVar7 * 0xf0);
          param_1[0x7a] = puVar7;
          if (&UNK_00888888 < puVar6) {
            local_28 = (int)puVar6 * 0xf0;
            local_2c = 0;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01c08b20,&DAT_01d2ebc8);
          }
          thunk_FUN_01be4678(puVar8);
        }
      }
      else if (puVar4 != puVar6) {
        uVar5 = 0;
        unaff_r10 = (uint)(ZEXT48(puVar4) * 0xf0);
        if (((int)(ZEXT48(puVar4) * 0xf0 >> 0x20) == 0) && (unaff_r10 < 0x7ffffff9)) {
          if (puVar2 < (undefined *)0x3) {
            uVar5 = 8;
            iVar1 = FUN_01298504(unaff_r10,8);
            if (iVar1 == 0) goto LAB_00782e8c;
            FUN_01bed4e2(iVar1,puVar8,(int)puVar7 * 0xf0);
          }
          else {
            uVar3 = (uint)(ZEXT48(puVar6) * 0xf0);
            if ((int)(ZEXT48(puVar6) * 0xf0 >> 0x20) != 0) {
              unaff_r10 = uVar3;
              goto LAB_00782e8c;
            }
            if (0x7ffffff8 < uVar3) goto LAB_00782e8c;
            uVar5 = 8;
            iVar1 = FUN_01298554(puVar8,uVar3,8,unaff_r10);
            if (iVar1 == 0) goto LAB_00782e8c;
          }
          param_1[0x7a] = puVar4;
          *param_1 = 1;
          param_1[1] = puVar7;
          param_1[2] = iVar1;
          uVar5 = 0x80000001;
        }
      }
LAB_00782e8c:
      FUN_01ab1588(uVar5,unaff_r10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("capacity overflow",0x11,&DAT_01d2ebe8);
}

