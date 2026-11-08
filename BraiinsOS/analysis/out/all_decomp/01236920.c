// FUN_01236920 @ 01236920 size=276 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01236920(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 local_2f;
  undefined1 local_2e;
  byte local_2d;
  byte *local_2c;
  code *local_28;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar5 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar5)(uVar3,"(",1);
  if (iVar2 == 0) {
    local_2f = *param_1;
    bVar1 = FUN_01236a48(&local_2f);
    if (bVar1 != 0) {
      local_2c = &local_2d;
      local_28 = FUN_01236bd8;
      local_2d = bVar1;
      iVar2 = FUN_00fa948c(uVar3,iVar4,&DAT_00590e71,&local_2c);
      if (iVar2 != 0) {
        return 1;
      }
    }
    local_2e = local_2f;
    do {
      bVar1 = FUN_01236a48(&local_2e);
      if (bVar1 == 0) {
        uVar3 = (*pcVar5)(uVar3,&DAT_00418e07,1);
        return uVar3;
      }
      local_28 = FUN_01236bd8;
      local_2d = bVar1;
      local_2c = &local_2d;
      iVar2 = FUN_00fa948c(uVar3,iVar4,&DAT_0059534d,&local_2c);
    } while (iVar2 == 0);
  }
  return 1;
}

