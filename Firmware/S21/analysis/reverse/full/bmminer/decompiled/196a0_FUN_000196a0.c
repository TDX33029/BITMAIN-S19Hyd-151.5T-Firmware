// FUN_000196a0 @ 000196a0  size=108  callers=1
// program: bmminer


void FUN_000196a0(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_19 [5];
  
  if (param_2 == 0) {
    local_19[0] = 4;
  }
  else {
    local_19[0] = 0x44;
  }
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_00017ec4();
    if (iVar3 <= iVar4) break;
    cVar1 = FUN_0002a5a4(iVar4);
    cVar2 = FUN_0002a584();
    FUN_00017794(param_1,cVar1 * cVar2,9,1,local_19);
    iVar4 = iVar4 + 1;
  }
  return;
}

