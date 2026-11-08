// FUN_016dd6bc @ 016dd6bc size=106 calls_out=0 calls_in=1
// strings: 

uint * FUN_016dd6bc(uint *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  
  if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) {
    pcVar3 = (char *)((int)param_2 + -1);
    do {
      puVar2 = param_1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      *(char *)puVar2 = cVar1;
      param_1 = (uint *)((int)puVar2 + 1);
    } while (cVar1 != '\0');
    return puVar2;
  }
  do {
    puVar2 = param_1;
    if (((uint)param_2 & 3) == 0) {
      while( true ) {
        uVar5 = *param_2;
        if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
        *puVar2 = uVar5;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
      pcVar3 = (char *)((int)param_2 + -1);
      do {
        puVar4 = puVar2;
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
        *(char *)puVar4 = cVar1;
        puVar2 = (uint *)((int)puVar4 + 1);
      } while (cVar1 != '\0');
      return puVar4;
    }
    uVar5 = *param_2;
    *(char *)puVar2 = (char)uVar5;
    param_1 = (uint *)((int)puVar2 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  } while ((char)uVar5 != '\0');
  return puVar2;
}

