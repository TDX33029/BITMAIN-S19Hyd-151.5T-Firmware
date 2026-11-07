// FUN_01bedbda @ 01bedbda size=60 calls_out=0 calls_in=33
// strings: 

int FUN_01bedbda(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = param_1;
  do {
    puVar2 = puVar1;
    if (((uint)puVar2 & 3) == 0) {
      do {
        uVar3 = *puVar2;
        puVar1 = puVar2;
        puVar2 = puVar2 + 1;
      } while ((uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0);
      do {
        puVar2 = puVar1;
        puVar1 = (uint *)((int)puVar2 + 1);
      } while ((char)*puVar2 != '\0');
      return (int)puVar2 - (int)param_1;
    }
    puVar1 = (uint *)((int)puVar2 + 1);
  } while ((char)*puVar2 != '\0');
  return (int)puVar2 - (int)param_1;
}

