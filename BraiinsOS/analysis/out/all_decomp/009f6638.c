// FUN_009f6638 @ 009f6638 size=296 calls_out=0 calls_in=0
// strings: 

uint FUN_009f6638(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 5;
    cVar1 = *(char *)(param_1 + 0x9c);
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 4);
    uVar3 = 5;
    puVar5 = puVar4 + *(int *)(param_1 + 8) * 2;
    do {
      uVar2 = (**(code **)(puVar4[1] + 0x20))(*puVar4);
      if (uVar2 == 6) {
        uVar3 = 6;
        cVar1 = *(char *)(param_1 + 0x9c);
        goto joined_r0x009f66b4;
      }
      puVar4 = puVar4 + 2;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
    } while (puVar4 != puVar5);
    cVar1 = *(char *)(param_1 + 0x9c);
  }
joined_r0x009f66b4:
  if (cVar1 == '\0') {
    if ((*(char *)(param_1 + 0x9d) != '\0') ||
       ((uVar3 == 6 && ((*(byte *)(param_1 + 0x9e) & 1) != 0)))) {
      return 6;
    }
    if (*(int *)(param_1 + 8) != 0) {
      puVar4 = *(undefined4 **)(param_1 + 4);
      puVar5 = puVar4 + *(int *)(param_1 + 8) * 2;
      do {
        local_2c = 0x3f260542;
        local_30 = 0x786d48ea;
        local_34 = 0xa0e55bac;
        local_38 = 0xa75c475;
        uVar2 = (**(code **)(puVar4[1] + 0x44))(*puVar4,&local_38);
        if ((uVar2 & 1) != 0) {
          return 6;
        }
        puVar4 = puVar4 + 2;
      } while (puVar4 != puVar5);
    }
  }
  return uVar3;
}

