// FUN_019a3ecc @ 019a3ecc size=244 calls_out=5 calls_in=0
// strings: 

void FUN_019a3ecc(void)

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
  uVar4 = 0x3c;
  puVar5 = &DAT_0052594d;
  do {
    uVar2 = FUN_01bf053e(2,puVar5,uVar4);
    if (uVar2 == 0xffffffff) {
      puVar1 = (undefined4 *)FUN_01be3244();
      puVar1 = (undefined4 *)*puVar1;
      local_28[0] = '\0';
      if (puVar1 != (undefined4 *)&SUB_00000004) goto LAB_019a3f78;
    }
    else {
      local_28[0] = '\x04';
      if (uVar2 == 0) {
        puVar1 = &DAT_01d2e7b8;
        pcVar8 = "\x02";
LAB_019a3f78:
        if ((*pcVar8 != '\x04') && (*pcVar8 == '\x03')) {
          uVar6 = *puVar1;
          puVar7 = (undefined4 *)puVar1[1];
          pcVar3 = (code *)*puVar7;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar6);
          }
          if (puVar7[1] != 0) {
            thunk_FUN_01be4678(uVar6);
          }
          thunk_FUN_01be4678(puVar1);
        }
        break;
      }
      if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar2,uVar4,uVar4,&DAT_01d27754);
      }
      puVar5 = puVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    }
  } while (uVar4 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0197a954();
}

