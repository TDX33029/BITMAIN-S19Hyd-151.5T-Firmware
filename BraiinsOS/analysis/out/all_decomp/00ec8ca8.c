// FUN_00ec8ca8 @ 00ec8ca8 size=204 calls_out=6 calls_in=3
// strings: 

void FUN_00ec8ca8(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint local_308;
  int iStack_304;
  int local_300;
  undefined4 local_2fc;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pcVar4 = (char *)param_1[2];
  do {
    FUN_005c96d0(&local_308,uVar2,uVar3);
    if ((~local_308 & 0x1e) == 0) {
      return;
    }
    if (*pcVar4 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar1) goto LAB_00ec8cfc;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00ec8cfc:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    FUN_0163af68(pcVar4,1,pcVar4);
    if (local_308 != 0x1f || iStack_304 != 0) {
      if ((local_308 & 0x1f) == 0x1d) {
        if (local_300 != 0) {
          thunk_FUN_016d3fb4(local_2fc);
        }
      }
      else if (local_308 != 0x1e) {
        FUN_00ebe668(&local_308);
      }
    }
  } while( true );
}

