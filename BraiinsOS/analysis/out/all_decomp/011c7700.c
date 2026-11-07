// FUN_011c7700 @ 011c7700 size=60 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_011c7700(int param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (*param_2 == '\x03') {
    uVar1 = FUN_00f5dd74(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    bVar2 = *(uint *)(param_1 + 8) <= uVar1;
    return CONCAT44(-(*(int *)(param_1 + 0xc) + (uint)!bVar2),
                    (uint)((uint)-*(int *)(param_1 + 0xc) < (uint)bVar2));
  }
  return CONCAT44(param_2,1);
}

