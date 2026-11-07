// FUN_00056b58 @ 00056b58  size=584  callers=1
// program: bmminer


void FUN_00056b58(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  char acStack_2020 [8192];
  
  FUN_00081200(param_1,1,0,0xb8,0x238ce00d);
  FUN_00081200(param_1,1,0,0xb9,0x3f0141af);
  puVar4 = &DAT_008c76a8;
  FUN_00081200(param_1,1,0,0xba,0x40010);
  FUN_00081200(param_1,1,0,0xbb,0x3340e80);
  FUN_0004bf68(0x14);
  FUN_00081200(param_1,1,0,0xb8,0x23ace00d);
  FUN_00081200(param_1,1,0,0xb9,0x3f4141af);
  memset(&DAT_008c76a8,0,0x400);
  FUN_00047f20(param_1,0xbd,&DAT_008c76a8);
  FUN_0004bf68(100);
  FUN_00081200(param_1,1,0,0xb8,0x23ace00d);
  FUN_00081200(param_1,1,0,0xb9,0x3f4141af);
  memset(&DAT_008c76a8,0,0x400);
  FUN_00047f20(param_1,0xbd,&DAT_008c76a8);
  iVar5 = 0;
  puVar6 = puVar4;
  while( true ) {
    iVar1 = FUN_0002a514();
    if (iVar1 <= iVar5) break;
    *puVar6 = *(ushort *)((int)puVar6 + 2) & 0x7fff;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (3 < DAT_000be63c) {
    builtin_strncpy(acStack_2020,"np data",8);
    FUN_0004948c(3,acStack_2020,0);
  }
  iVar1 = FUN_0002a574();
  iVar5 = 0;
  while( true ) {
    uVar2 = FUN_0002a514();
    iVar3 = FUN_00098658(uVar2,iVar1);
    if (iVar3 <= iVar5) break;
    if (3 < DAT_000be63c) {
      snprintf(acStack_2020,0x2000,"%d %d %d %d %d",*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4])
      ;
      FUN_0004948c(3,acStack_2020,0);
    }
    puVar4 = puVar4 + iVar1;
    iVar5 = iVar5 + 1;
  }
  return;
}

