// FUN_0164ff24 @ 0164ff24 size=404 calls_out=4 calls_in=4
// strings: 

longlong FUN_0164ff24(uint *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint unaff_r5;
  
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3;
  DataMemoryBarrier(0xb);
  if (((uVar3 & 0xffff) != 0) || (param_1[1] <= uVar3 >> 0x10)) {
LAB_0164ff50:
    return (ulonglong)unaff_r5 << 0x20;
  }
  pcVar4 = (char *)(param_2 + 0x94);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0164ff94;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar4);
LAB_0164ff94:
  FUN_0128236c(pcVar4);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3;
  DataMemoryBarrier(0xb);
  if (((uVar3 & 0xffff) == 0) && (uVar3 >> 0x10 < param_1[1])) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = *param_1 + 0x10001;
    DataMemoryBarrier(0xb);
    iVar2 = *(int *)(param_2 + 0xa0);
    if (iVar2 != 0) {
      *(int *)(param_2 + 0xa0) = iVar2 + -1;
      param_2 = *(uint *)(*(int *)(param_2 + 0x9c) + (iVar2 + -1) * 4);
    }
    uVar3 = (uint)(iVar2 != 0);
    FUN_01282570(pcVar4);
    if (*pcVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar4);
        if (bVar1) {
          *pcVar4 = '\0';
          goto LAB_0165005c;
        }
      } while (*pcVar4 == '\x01');
    }
  }
  else {
    FUN_01282570(pcVar4);
    if (*pcVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar4);
        if (bVar1) {
          *pcVar4 = '\0';
          unaff_r5 = param_2;
          goto LAB_0164ff50;
        }
      } while (*pcVar4 == '\x01');
    }
    uVar3 = 0;
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar4);
LAB_0165005c:
  return CONCAT44(param_2,uVar3);
}

