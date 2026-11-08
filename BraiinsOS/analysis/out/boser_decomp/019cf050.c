// FUN_019cf050 @ 019cf050 size=144 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_019cf050(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  piVar2 = (int *)param_1[2];
  iVar3 = piVar2[2];
  if (param_3 < (uint)(*piVar2 - iVar3)) {
    FUN_01bed4e2(piVar2[1] + iVar3,param_2,param_3);
    piVar2[2] = iVar3 + param_3;
    uVar1 = 0;
  }
  else {
    FUN_019cce08(&local_20,piVar2,param_2,param_3);
    uVar1 = 0;
    if ((char)local_20 != '\x04') {
      FUN_012c3098(*(undefined1 *)param_1,param_1[1]);
      *param_1 = local_20;
      param_1[1] = uStack_1c;
      uVar1 = 1;
    }
  }
  return uVar1;
}

