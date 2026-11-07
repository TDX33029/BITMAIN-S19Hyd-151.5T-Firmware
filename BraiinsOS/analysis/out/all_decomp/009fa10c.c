// FUN_009fa10c @ 009fa10c size=196 calls_out=3 calls_in=2
// strings: 

void FUN_009fa10c(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [4];
  undefined4 *local_1c;
  
  if (*(char *)(param_1 + 0x21) == '\x02') {
    uVar1 = (uint)local_24 >> 8;
    local_30 = 0;
    uStack_2c = 0x1b6;
    local_28 = 0x10001;
    local_24 = CONCAT31((uint3)uVar1 & 0xffff00,1);
  }
  else {
    local_30 = *(undefined4 *)(param_1 + 0x14);
    uStack_2c = *(undefined4 *)(param_1 + 0x18);
    local_28 = *(undefined4 *)(param_1 + 0x1c);
    local_24 = *(undefined4 *)(param_1 + 0x20);
  }
  FUN_015ec1bc(local_20,&local_30,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  if (local_20[0] == '\x03') {
    uVar3 = *local_1c;
    puVar4 = (undefined4 *)local_1c[1];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    thunk_FUN_016d3fb4(local_1c);
  }
  if (*(int *)(param_1 + 0x2c) != -1) {
    FUN_016dffb2();
  }
  if (local_20[0] != '\x04') {
    local_1c = (undefined4 *)0xffffffff;
  }
  *(undefined4 **)(param_1 + 0x2c) = local_1c;
  return;
}

