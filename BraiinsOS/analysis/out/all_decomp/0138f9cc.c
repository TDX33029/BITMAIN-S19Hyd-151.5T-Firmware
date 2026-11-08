// FUN_0138f9cc @ 0138f9cc size=240 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_0138f9cc(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_18 [2];
  
  iVar4 = param_1[1];
  if (0x7ffffff < *(uint *)(iVar4 + 0x7c)) {
    iVar2 = *param_1;
    if (((*(byte *)(iVar2 + 0x30) & 1) != 0) && (*(uint *)(iVar2 + 0x34) <= *(uint *)(iVar4 + 0x6c))
       ) {
      if ((*(byte *)(iVar2 + 0x38) & 1) == 0) {
        return 1;
      }
      iVar3 = 0;
      if (*(int *)(iVar4 + 0xb0) == 1) {
        uVar5 = *(uint *)(iVar4 + 0xb4);
        uVar6 = *(uint *)(iVar4 + 0xb8);
        iVar3 = uVar5 - uVar6;
        if (uVar5 < uVar6 || iVar3 == 0) {
          iVar3 = uVar6 - uVar5;
        }
      }
      lVar1 = (ulonglong)*(uint *)(iVar4 + 0x94) * (ulonglong)*(uint *)(iVar2 + 0x3c);
      uVar5 = (uint)lVar1;
      if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
        uVar5 = 0xffffffff;
      }
      if ((uint)(iVar3 + *(int *)(iVar4 + 0x70)) < uVar5) {
        return 1;
      }
    }
    FUN_0138e168();
    local_18[0] = *(uint *)(iVar4 + 0x7c);
    if (0x7ffffff < local_18[0]) {
      local_18[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,local_18,&DAT_01893030,&DAT_01892f70);
    }
  }
  return 0;
}

