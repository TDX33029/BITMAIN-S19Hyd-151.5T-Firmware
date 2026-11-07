// FUN_019f7d9c @ 019f7d9c size=264 calls_out=7 calls_in=1
// strings: 

void FUN_019f7d9c(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_4c;
  int local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (DAT_01d50460 != 0) {
    iVar6 = DAT_01d50460 * 0x1c;
    uVar7 = DAT_01d50460;
    do {
      uVar7 = uVar7 - 1;
      iVar6 = iVar6 + -0x1c;
      if (DAT_01d50460 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,DAT_01d50460,&DAT_01d299d0);
      }
      iVar3 = FUN_019ea8f8(&local_4c,DAT_01d5045c + iVar6);
      iVar2 = local_4c;
      if (local_4c == 0) {
        iVar3 = local_48[0];
      }
      if (local_4c != 0 || iVar3 != 0) {
        if (DAT_01d50460 <= uVar7) {
          FUN_006664cc(uVar7);
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x19f7ea0);
          (*pcVar1)();
        }
        puVar4 = (undefined4 *)(DAT_01d5045c + iVar6);
        local_40 = *puVar4;
        uStack_3c = puVar4[1];
        uStack_38 = puVar4[2];
        local_34 = puVar4[3];
        uStack_30 = puVar4[4];
        uStack_2c = puVar4[5];
        uStack_28 = puVar4[6];
        uVar5 = DAT_01d50460 - 1;
        FUN_01bed864(puVar4,DAT_01d5045c + uVar5 * 0x1c,0x1c);
        DAT_01d50460 = uVar5;
        FUN_010a813c(&local_40);
        if (iVar2 != 0) {
          FUN_0069603c(local_48);
        }
      }
    } while (uVar7 != 0);
  }
  FUN_019f6ff0();
  return;
}

