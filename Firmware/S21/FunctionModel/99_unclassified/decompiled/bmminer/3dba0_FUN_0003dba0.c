// FUN_0003dba0 @ 0003dba0  size=152  callers=2
// program: bmminer


uint FUN_0003dba0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auStack_41c [4];
  uint auStack_418 [259];
  
  memset(auStack_41c,0,0x40c);
  iVar1 = FUN_0001d4fc(param_1,auStack_41c);
  if (iVar1 == 0) {
    iVar1 = FUN_0002a514();
    if (0 < iVar1) {
      puVar4 = auStack_418;
      puVar2 = puVar4 + iVar1;
      do {
        puVar4 = puVar4 + 1;
        uVar3 = *puVar4;
        if (param_2 == 0) {
          if (uVar3 <= auStack_418[1]) {
            auStack_418[1] = uVar3;
          }
        }
        else if (auStack_418[1] < uVar3) {
          auStack_418[1] = uVar3;
        }
      } while (puVar4 != puVar2);
    }
  }
  else {
    auStack_418[1] = (&DAT_000c0430)[param_1];
  }
  return auStack_418[1];
}

