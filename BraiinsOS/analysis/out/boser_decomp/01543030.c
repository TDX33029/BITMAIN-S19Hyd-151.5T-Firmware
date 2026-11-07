// FUN_01543030 @ 01543030 size=248 calls_out=6 calls_in=1
// strings: unevaluatedItems

void FUN_01543030(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  int local_108;
  undefined4 local_104;
  undefined1 auStack_100 [104];
  int local_98;
  undefined4 local_94;
  undefined1 auStack_90 [104];
  undefined8 local_28;
  
  if ((*param_4 != '\x01') || (uVar1 = 0, param_4[1] == '\0')) {
    FUN_01543160(&local_98,param_2);
    if (local_98 == 2) {
      puVar2 = (undefined *)FUN_01594a60(local_94);
      iVar3 = 0;
    }
    else {
      FUN_01bed4e2(auStack_100,auStack_90,0x68);
      local_104 = local_94;
      local_108 = local_98;
      uVar4 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                           "unevaluatedItems",0x10);
      FUN_01bed4e2(&local_98,&local_108,0x70);
      local_28 = uVar4;
      iVar3 = thunk_FUN_01be5118(0x78);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x78);
      }
      FUN_01bed4e2(iVar3,&local_98,0x78);
      puVar2 = &DAT_01cfb72c;
    }
    uVar1 = 1;
    param_1[1] = iVar3;
    param_1[2] = puVar2;
  }
  *param_1 = uVar1;
  return;
}

