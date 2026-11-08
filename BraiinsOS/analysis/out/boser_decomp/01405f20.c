// FUN_01405f20 @ 01405f20 size=200 calls_out=1 calls_in=0
// strings: 

void FUN_01405f20(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  if ((char)param_2[4] == '\0') {
    FUN_019ac130(&local_30,1);
    uVar2 = *param_2;
    uVar5 = param_2[1];
    bVar1 = (int)(uStack_2c - (uVar5 + (local_30 < uVar2))) < 0 ==
            (SBORROW4(uStack_2c,uVar5) != SBORROW4(uStack_2c - uVar5,(uint)(local_30 < uVar2)));
    if (local_30 == uVar2 && uStack_2c == uVar5) {
      bVar1 = param_2[2] <= uStack_28;
    }
    if (bVar1) {
      puVar4 = param_2 + 4;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *(char *)puVar4 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar2 == '\0') {
        uVar2 = param_2[1];
        puVar3 = (undefined1 *)param_2[2];
        *param_1 = *param_2;
        param_1[1] = uVar2;
        goto LAB_01405fa8;
      }
      goto LAB_01405f38;
    }
    *(undefined1 *)param_1 = 0;
  }
  else {
LAB_01405f38:
    *(undefined1 *)param_1 = 0;
  }
  puVar3 = &DAT_3b9aca00;
LAB_01405fa8:
  param_1[2] = (uint)puVar3;
  return;
}

