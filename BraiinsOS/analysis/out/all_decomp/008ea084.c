// FUN_008ea084 @ 008ea084 size=240 calls_out=4 calls_in=1
// strings: 

void FUN_008ea084(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint local_50 [2];
  byte local_48;
  undefined4 local_44 [9];
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  pcVar6 = (char *)param_1[2];
LAB_008ea0b4:
  do {
    FUN_008e6b9c(local_50,uVar4,uVar5);
    if ((local_50[0] & 0xe) == 8) {
      return;
    }
    if (*pcVar6 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (!bVar1) goto LAB_008ea0f4;
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008ea0f4:
      FUN_01280da8(pcVar6);
    }
    FUN_0128236c(pcVar6);
    FUN_0163af68(pcVar6,1,pcVar6);
    if (local_50[0] == 0) goto LAB_008ea130;
    puVar3 = (undefined4 *)((uint)local_50 | 4);
  } while (local_50[0] != 2);
  goto LAB_008ea0a4;
LAB_008ea130:
  cVar2 = local_48 - 4;
  if (local_48 < 4) {
    cVar2 = '\x04';
  }
  puVar3 = local_44;
  if ((cVar2 == '\x05') || ((cVar2 == '\x04' && (local_48 == 3)))) {
LAB_008ea0a4:
    (*(code *)**(undefined4 **)*puVar3)();
  }
  goto LAB_008ea0b4;
}

