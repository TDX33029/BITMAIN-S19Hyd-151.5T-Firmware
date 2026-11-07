// FUN_019e84a0 @ 019e84a0 size=408 calls_out=7 calls_in=36
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | inner should already be initialized by `self.reset()`

undefined4 FUN_019e84a0(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  char local_21;
  char *local_20;
  code *local_1c;
  
  uVar2 = FUN_019ec670(param_2);
  if ((uVar2 & 0xff) == 2) {
    uVar6 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar6 = uVar2 & 0xffffff;
    uVar2 = uVar6 >> 0x10;
    uVar6 = uVar6 >> 8;
  }
  iVar4 = 0x180;
  if (param_1[0xc] != 0) {
    iVar4 = 0xb8;
  }
  if (*(undefined1 **)(param_1[0xd] + iVar4 + 0x60) == &DAT_3b9aca00) {
    uVar7 = 0x73;
    puVar5 = &DAT_01d298d8;
    pcVar3 = 
    "A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
    ;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(char *)(param_1[0xd] + iVar4 + 0x50) != '\0') {
      FUN_019f5958(&DAT_01d298c0,&DAT_01d298c8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19e8638);
      (*pcVar1)();
    }
    if ((char)param_1[0x12] == '\0') {
      FUN_019f598c(param_1,1,param_1[0xe],param_1[0xf],param_1[0x10],1);
    }
    if ((*param_1 & 1) != 0) {
      FUN_019f79e0(param_1 + 8,param_2);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if ((param_1[7] & param_1[6]) == 0xffffffff) {
        uVar6 = param_1[0xb];
        uVar7 = 0;
        FUN_019edbc4(0,uVar2);
        if ((char)uVar6 != '\0') {
          local_1c = FUN_019f8704;
          local_20 = &local_21;
          local_21 = (char)uVar6;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005abbd4,&local_20,&DAT_01d29374);
        }
      }
      else {
        FUN_019edbc4(uVar6,uVar2);
        uVar7 = 1;
      }
      return uVar7;
    }
    uVar7 = 0x35;
    puVar5 = &DAT_01d298b0;
    pcVar3 = "inner should already be initialized by `self.reset()`";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(pcVar3,uVar7,puVar5);
}

