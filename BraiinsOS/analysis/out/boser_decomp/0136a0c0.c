// FUN_0136a0c0 @ 0136a0c0 size=228 calls_out=4 calls_in=2
// strings: invalid key

void FUN_0136a0c0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_210;
  int local_20c;
  undefined1 auStack_208 [204];
  int local_13c [9];
  undefined1 auStack_118 [244];
  
  iVar4 = *param_1;
  uVar5 = param_1[1];
  if (uVar5 < *(uint *)(iVar4 + 0x38)) {
    iVar7 = *(int *)(iVar4 + 0x40);
    piVar2 = (int *)(*(int *)(iVar4 + 0x34) + uVar5 * 0xf8);
    iVar6 = *piVar2;
    iVar3 = piVar2[1];
    FUN_01bed4e2(auStack_118,piVar2 + 2,0xf0);
    piVar2[1] = 0;
    piVar2[2] = iVar7;
    *piVar2 = 3;
    if (iVar6 != 3 || iVar3 != 0) {
      FUN_01bed4e2(auStack_208,auStack_118,0xf0);
      *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + -1;
      *(uint *)(iVar4 + 0x40) = uVar5;
      local_210 = iVar6;
      local_20c = iVar3;
      if (local_13c[0] != param_1[2]) {
        FUN_0138b5c8(local_13c,param_1 + 2);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x136a178);
        (*pcVar1)();
      }
      FUN_0136a1c4(&local_210);
      return;
    }
    FUN_01bed4e2(piVar2 + 2,auStack_118,0xf0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("invalid key",0xb,&DAT_01ce8874);
}

