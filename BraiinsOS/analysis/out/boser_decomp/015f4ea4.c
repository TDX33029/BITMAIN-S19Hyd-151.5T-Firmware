// FUN_015f4ea4 @ 015f4ea4 size=192 calls_out=4 calls_in=0
// strings: fatal runtime error: thread result panicked on drop; aborting 

void FUN_015f4ea4(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_28 [4];
  uint local_24;
  
  uVar4 = 0x3e;
  pcVar5 = "fatal runtime error: thread result panicked on drop, aborting\n";
  do {
    uVar1 = FUN_01bf053e(2,pcVar5,uVar4);
    if (uVar1 == 0xffffffff) {
      puVar2 = (uint *)FUN_01be3244();
      local_28[0] = 0;
      local_24 = *puVar2;
      if (*puVar2 != 4) {
        puVar6 = (undefined4 *)local_28;
        goto LAB_015f4f40;
      }
      FUN_0069d8a4(0);
    }
    else {
      local_24 = uVar1;
      local_28[0] = 4;
      puVar6 = &DAT_01d2e7c8;
      if (uVar1 == 0) {
LAB_015f4f40:
        uVar3 = puVar6[1];
        *param_1 = *puVar6;
        param_1[1] = uVar3;
        return;
      }
      if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,uVar4,uVar4,&DAT_01d2e7d0);
      }
      pcVar5 = pcVar5 + uVar1;
      uVar4 = uVar4 - uVar1;
    }
    if (uVar4 == 0) {
      *(undefined1 *)param_1 = 4;
      return;
    }
  } while( true );
}

