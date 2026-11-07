// FUN_015eaa04 @ 015eaa04 size=252 calls_out=5 calls_in=1
// strings: failed to write whole buffer | failed to write whole buffer

void FUN_015eaa04(void)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char local_28 [4];
  
  pcVar8 = local_28;
  uVar4 = 0x44;
  puVar5 = &DAT_0040fa8c;
  do {
    while (uVar2 = FUN_016e034e(2,puVar5,uVar4), uVar2 != 0xffffffff) {
      local_28[0] = '\x04';
      if (uVar2 == 0) {
        puVar1 = &DAT_018aeae8;
        pcVar8 = "\x02";
LAB_015eaab8:
        if ((*pcVar8 != '\x04') && (*pcVar8 == '\x03')) {
          uVar6 = *puVar1;
          puVar7 = (undefined4 *)puVar1[1];
          pcVar3 = (code *)*puVar7;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar6);
          }
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(uVar6);
          }
          thunk_FUN_016d3fb4(puVar1);
        }
        goto LAB_015eab00;
      }
      if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar4,uVar4,&DAT_018aab58);
      }
      puVar5 = puVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
      if (uVar4 == 0) goto LAB_015eab00;
    }
    puVar1 = (undefined4 *)FUN_016d2bc8();
    puVar1 = (undefined4 *)*puVar1;
    local_28[0] = '\0';
    if (puVar1 != (undefined4 *)&DAT_00000004) goto LAB_015eaab8;
  } while (uVar4 != 0);
LAB_015eab00:
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

